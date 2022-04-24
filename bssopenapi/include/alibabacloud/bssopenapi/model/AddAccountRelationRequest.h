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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_ADDACCOUNTRELATIONREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_ADDACCOUNTRELATIONREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT AddAccountRelationRequest : public RpcServiceRequest {
public:
	AddAccountRelationRequest();
	~AddAccountRelationRequest();
	std::string getChildNick() const;
	void setChildNick(const std::string &childNick);
	std::string getRelationType() const;
	void setRelationType(const std::string &relationType);
	long getParentUserId() const;
	void setParentUserId(long parentUserId);
	long getChildUserId() const;
	void setChildUserId(long childUserId);
	std::string getRequestId() const;
	void setRequestId(const std::string &requestId);
	std::vector<std::string> getPermissionCodes() const;
	void setPermissionCodes(const std::vector<std::string> &permissionCodes);
	std::vector<std::string> getRoleCodes() const;
	void setRoleCodes(const std::vector<std::string> &roleCodes);

private:
	std::string childNick_;
	std::string relationType_;
	long parentUserId_;
	long childUserId_;
	std::string requestId_;
	std::vector<std::string> permissionCodes_;
	std::vector<std::string> roleCodes_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_ADDACCOUNTRELATIONREQUEST_H_
