/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_MODIFYAPICONFIGURATIONREQUEST_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_MODIFYAPICONFIGURATIONREQUEST_H_

#include <alibabacloud/cloudapi/CloudAPIExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CloudAPI {
namespace Model {
class ALIBABACLOUD_CLOUDAPI_EXPORT ModifyApiConfigurationRequest : public RpcServiceRequest {
public:
	ModifyApiConfigurationRequest();
	~ModifyApiConfigurationRequest();
	std::string getContentTypeCategory() const;
	void setContentTypeCategory(const std::string &contentTypeCategory);
	std::string getModelName() const;
	void setModelName(const std::string &modelName);
	std::string getErrorCodeSamples() const;
	void setErrorCodeSamples(const std::string &errorCodeSamples);
	std::string getAppCodeAuthType() const;
	void setAppCodeAuthType(const std::string &appCodeAuthType);
	std::string getAuthType() const;
	void setAuthType(const std::string &authType);
	std::string getHttpConfig() const;
	void setHttpConfig(const std::string &httpConfig);
	std::string getServiceParameters() const;
	void setServiceParameters(const std::string &serviceParameters);
	std::string getFailResultSample() const;
	void setFailResultSample(const std::string &failResultSample);
	std::string getContentTypeValue() const;
	void setContentTypeValue(const std::string &contentTypeValue);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getVisibility() const;
	void setVisibility(const std::string &visibility);
	std::string getRequestProtocol() const;
	void setRequestProtocol(const std::string &requestProtocol);
	std::string getRequestMode() const;
	void setRequestMode(const std::string &requestMode);
	std::string getBackendName() const;
	void setBackendName(const std::string &backendName);
	std::string getRequestPath() const;
	void setRequestPath(const std::string &requestPath);
	std::string getResultType() const;
	void setResultType(const std::string &resultType);
	std::string getMockConfig() const;
	void setMockConfig(const std::string &mockConfig);
	std::string getResultSample() const;
	void setResultSample(const std::string &resultSample);
	std::string getBodyModel() const;
	void setBodyModel(const std::string &bodyModel);
	std::string getVpcConfig() const;
	void setVpcConfig(const std::string &vpcConfig);
	std::string getFunctionComputeConfig() const;
	void setFunctionComputeConfig(const std::string &functionComputeConfig);
	std::string getApiId() const;
	void setApiId(const std::string &apiId);
	bool getUseBackendService() const;
	void setUseBackendService(bool useBackendService);
	std::string getServiceProtocol() const;
	void setServiceProtocol(const std::string &serviceProtocol);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	bool getDisableInternet() const;
	void setDisableInternet(bool disableInternet);
	std::string getPostBodyDescription() const;
	void setPostBodyDescription(const std::string &postBodyDescription);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getAllowSignatureMethod() const;
	void setAllowSignatureMethod(const std::string &allowSignatureMethod);
	std::string getRequestHttpMethod() const;
	void setRequestHttpMethod(const std::string &requestHttpMethod);
	std::string getServiceParametersMap() const;
	void setServiceParametersMap(const std::string &serviceParametersMap);
	std::string getRequestParameters() const;
	void setRequestParameters(const std::string &requestParameters);
	std::string getBodyFormat() const;
	void setBodyFormat(const std::string &bodyFormat);
	std::string getOssConfig() const;
	void setOssConfig(const std::string &ossConfig);
	std::string getApiName() const;
	void setApiName(const std::string &apiName);
	int getServiceTimeout() const;
	void setServiceTimeout(int serviceTimeout);
	bool getForceNonceCheck() const;
	void setForceNonceCheck(bool forceNonceCheck);

private:
	std::string contentTypeCategory_;
	std::string modelName_;
	std::string errorCodeSamples_;
	std::string appCodeAuthType_;
	std::string authType_;
	std::string httpConfig_;
	std::string serviceParameters_;
	std::string failResultSample_;
	std::string contentTypeValue_;
	std::string securityToken_;
	std::string visibility_;
	std::string requestProtocol_;
	std::string requestMode_;
	std::string backendName_;
	std::string requestPath_;
	std::string resultType_;
	std::string mockConfig_;
	std::string resultSample_;
	std::string bodyModel_;
	std::string vpcConfig_;
	std::string functionComputeConfig_;
	std::string apiId_;
	bool useBackendService_;
	std::string serviceProtocol_;
	std::string description_;
	bool disableInternet_;
	std::string postBodyDescription_;
	std::string accessKeyId_;
	std::string allowSignatureMethod_;
	std::string requestHttpMethod_;
	std::string serviceParametersMap_;
	std::string requestParameters_;
	std::string bodyFormat_;
	std::string ossConfig_;
	std::string apiName_;
	int serviceTimeout_;
	bool forceNonceCheck_;
};
} // namespace Model
} // namespace CloudAPI
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_MODIFYAPICONFIGURATIONREQUEST_H_
