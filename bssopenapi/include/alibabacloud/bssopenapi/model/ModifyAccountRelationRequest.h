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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_MODIFYACCOUNTRELATIONREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_MODIFYACCOUNTRELATIONREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT ModifyAccountRelationRequest : public RpcServiceRequest {
public:
	ModifyAccountRelationRequest();
	~ModifyAccountRelationRequest();
	std::string getChildNick() const;
	void setChildNick(const std::string &childNick);
	long getParentUserId() const;
	void setParentUserId(long parentUserId);
	long getRelationId() const;
	void setRelationId(long relationId);
	std::vector<std::string> getRoleCodes() const;
	void setRoleCodes(const std::vector<std::string> &roleCodes);
	std::string getRelationOperation() const;
	void setRelationOperation(const std::string &relationOperation);
	std::string getRelationType() const;
	void setRelationType(const std::string &relationType);
	long getChildUserId() const;
	void setChildUserId(long childUserId);
	std::string getRequestId() const;
	void setRequestId(const std::string &requestId);
	std::vector<std::string> getPermissionCodes() const;
	void setPermissionCodes(const std::vector<std::string> &permissionCodes);

private:
	std::string childNick_;
	long parentUserId_;
	long relationId_;
	std::vector<std::string> roleCodes_;
	std::string relationOperation_;
	std::string relationType_;
	long childUserId_;
	std::string requestId_;
	std::vector<std::string> permissionCodes_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_MODIFYACCOUNTRELATIONREQUEST_H_
