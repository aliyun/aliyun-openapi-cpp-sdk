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

#ifndef ALIBABACLOUD_TAG_MODEL_LISTTAGKEYSREQUEST_H_
#define ALIBABACLOUD_TAG_MODEL_LISTTAGKEYSREQUEST_H_

#include <alibabacloud/tag/TagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Tag {
namespace Model {
class ALIBABACLOUD_TAG_EXPORT ListTagKeysRequest : public RpcServiceRequest {
public:
	ListTagKeysRequest();
	~ListTagKeysRequest();
	std::string getTagProduct() const;
	void setTagProduct(const std::string &tagProduct);
	std::string getTagFilterKey() const;
	void setTagFilterKey(const std::string &tagFilterKey);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getQueryType() const;
	void setQueryType(const std::string &queryType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getFuzzyType() const;
	void setFuzzyType(const std::string &fuzzyType);
	std::string getCategory() const;
	void setCategory(const std::string &category);

private:
	std::string tagProduct_;
	std::string tagFilterKey_;
	std::string regionId_;
	std::string nextToken_;
	int pageSize_;
	std::string queryType_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string resourceType_;
	std::string fuzzyType_;
	std::string category_;
};
} // namespace Model
} // namespace Tag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_TAG_MODEL_LISTTAGKEYSREQUEST_H_
