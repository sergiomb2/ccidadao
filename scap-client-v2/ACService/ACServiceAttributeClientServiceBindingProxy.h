/* ACServiceAttributeClientServiceBindingProxy.h
   Generated by gSOAP 2.8.28 from SCAP-ACService.h

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef ACServiceAttributeClientServiceBindingProxy_H
#define ACServiceAttributeClientServiceBindingProxy_H
#include "ACServiceH.h"

namespace ACService {

class SOAP_CMAC AttributeClientServiceBindingProxy
{ public:
	struct soap *soap;
	bool soap_own;
	/// Endpoint URL of service 'AttributeClientServiceBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Variables globally declared in SCAP-ACService.h (non-static)
	/// Constructor
	AttributeClientServiceBindingProxy();
	/// Copy constructor
	AttributeClientServiceBindingProxy(const AttributeClientServiceBindingProxy& rhs);
	/// Constructor to use/share an engine state
	AttributeClientServiceBindingProxy(struct soap*);
	/// Constructor with endpoint URL
	AttributeClientServiceBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	AttributeClientServiceBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	AttributeClientServiceBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	AttributeClientServiceBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor deletes non-shared engine context only (use destroy() to delete deserialized data)
	virtual	~AttributeClientServiceBindingProxy();
	/// Initializer used by constructors
	virtual	void AttributeClientServiceBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Create a new copy
	virtual	AttributeClientServiceBindingProxy *copy() SOAP_PURE_VIRTUAL;
	/// Copy assignment
	AttributeClientServiceBindingProxy& operator=(const AttributeClientServiceBindingProxy&);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'Attributes' (returns error code or SOAP_OK)
	virtual	int Attributes(ns2__AttributeRequestType *ns2__AttributeRequest, ns2__AttributeResponseType &ns2__AttributeResponse) { return this->Attributes(NULL, NULL, ns2__AttributeRequest, ns2__AttributeResponse); }
	virtual	int Attributes(const char *endpoint, const char *soap_action, ns2__AttributeRequestType *ns2__AttributeRequest, ns2__AttributeResponseType &ns2__AttributeResponse);
};

} // namespace ACService

#endif
