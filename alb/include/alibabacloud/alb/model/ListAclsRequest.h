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

#ifndef ALIBABACLOUD_ALB_MODEL_LISTACLSREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_LISTACLSREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT ListAclsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	ListAclsRequest();
	~ListAclsRequest();
	std::vector<std::string> getAclIds() const;
	void setAclIds(const std::vector<std::string> &aclIds);
	std::string getAddressIPVersion() const;
	void setAddressIPVersion(const std::string &addressIPVersion);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::vector<std::string> getAclNames() const;
	void setAclNames(const std::vector<std::string> &aclNames);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::vector<std::string> aclIds_;
	std::string addressIPVersion_;
	std::string resourceGroupId_;
	std::string nextToken_;
	std::vector<Tag> tag_;
	std::vector<std::string> aclNames_;
	int maxResults_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_LISTACLSREQUEST_H_
