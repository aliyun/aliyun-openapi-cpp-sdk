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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_MODIFYINSTANCECONFIGREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_MODIFYINSTANCECONFIGREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT ModifyInstanceConfigRequest : public RpcServiceRequest {
public:
	ModifyInstanceConfigRequest();
	~ModifyInstanceConfigRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getParamSemisyncReplTimeout() const;
	void setParamSemisyncReplTimeout(const std::string &paramSemisyncReplTimeout);
	std::string getParamNoLooseSentinelPasswordFreeCommands() const;
	void setParamNoLooseSentinelPasswordFreeCommands(const std::string &paramNoLooseSentinelPasswordFreeCommands);
	std::string getParamNoLooseSentinelPasswordFreeAccess() const;
	void setParamNoLooseSentinelPasswordFreeAccess(const std::string &paramNoLooseSentinelPasswordFreeAccess);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getParamReplMode() const;
	void setParamReplMode(const std::string &paramReplMode);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getParamNoLooseSentinelEnabled() const;
	void setParamNoLooseSentinelEnabled(const std::string &paramNoLooseSentinelEnabled);
	std::string getProduct() const;
	void setProduct(const std::string &product);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getParamSentinelCompatEnable() const;
	void setParamSentinelCompatEnable(const std::string &paramSentinelCompatEnable);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	std::string getConfig() const;
	void setConfig(const std::string &config);

private:
	long resourceOwnerId_;
	std::string paramSemisyncReplTimeout_;
	std::string paramNoLooseSentinelPasswordFreeCommands_;
	std::string paramNoLooseSentinelPasswordFreeAccess_;
	std::string accessKeyId_;
	std::string paramReplMode_;
	std::string securityToken_;
	std::string paramNoLooseSentinelEnabled_;
	std::string product_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string paramSentinelCompatEnable_;
	long ownerId_;
	std::string instanceId_;
	std::string category_;
	std::string config_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_MODIFYINSTANCECONFIGREQUEST_H_
