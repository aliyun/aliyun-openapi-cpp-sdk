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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_ADDDATALEVELPERMISSIONWHITELISTREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_ADDDATALEVELPERMISSIONWHITELISTREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT AddDataLevelPermissionWhiteListRequest : public RpcServiceRequest {
public:
	AddDataLevelPermissionWhiteListRequest();
	~AddDataLevelPermissionWhiteListRequest();
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	std::string getCubeId() const;
	void setCubeId(const std::string &cubeId);
	std::string getTargetIds() const;
	void setTargetIds(const std::string &targetIds);
	std::string getRuleType() const;
	void setRuleType(const std::string &ruleType);
	std::string getSignType() const;
	void setSignType(const std::string &signType);
	std::string getOperateType() const;
	void setOperateType(const std::string &operateType);

private:
	std::string targetType_;
	std::string clientToken_;
	std::string accessPoint_;
	std::string cubeId_;
	std::string targetIds_;
	std::string ruleType_;
	std::string signType_;
	std::string operateType_;
};
} // namespace Model
} // namespace Quickbi_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_ADDDATALEVELPERMISSIONWHITELISTREQUEST_H_
