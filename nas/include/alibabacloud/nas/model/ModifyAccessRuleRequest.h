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

#ifndef ALIBABACLOUD_NAS_MODEL_MODIFYACCESSRULEREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_MODIFYACCESSRULEREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT ModifyAccessRuleRequest : public RpcServiceRequest {
public:
	ModifyAccessRuleRequest();
	~ModifyAccessRuleRequest();
	std::string getRWAccessType() const;
	void setRWAccessType(const std::string &rWAccessType);
	std::string getUserAccessType() const;
	void setUserAccessType(const std::string &userAccessType);
	std::string getFileSystemType() const;
	void setFileSystemType(const std::string &fileSystemType);
	std::string getAccessRuleId() const;
	void setAccessRuleId(const std::string &accessRuleId);
	std::string getIpv6SourceCidrIp() const;
	void setIpv6SourceCidrIp(const std::string &ipv6SourceCidrIp);
	std::string getSourceCidrIp() const;
	void setSourceCidrIp(const std::string &sourceCidrIp);
	int getPriority() const;
	void setPriority(int priority);
	std::string getAccessGroupName() const;
	void setAccessGroupName(const std::string &accessGroupName);

private:
	std::string rWAccessType_;
	std::string userAccessType_;
	std::string fileSystemType_;
	std::string accessRuleId_;
	std::string ipv6SourceCidrIp_;
	std::string sourceCidrIp_;
	int priority_;
	std::string accessGroupName_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_MODIFYACCESSRULEREQUEST_H_
