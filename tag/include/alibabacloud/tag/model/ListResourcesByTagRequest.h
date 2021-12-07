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

#ifndef ALIBABACLOUD_TAG_MODEL_LISTRESOURCESBYTAGREQUEST_H_
#define ALIBABACLOUD_TAG_MODEL_LISTRESOURCESBYTAGREQUEST_H_

#include <alibabacloud/tag/TagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Tag {
namespace Model {
class ALIBABACLOUD_TAG_EXPORT ListResourcesByTagRequest : public RpcServiceRequest {
public:
	ListResourcesByTagRequest();
	~ListResourcesByTagRequest();
	std::string getTagFilterKey() const;
	void setTagFilterKey(const std::string &tagFilterKey);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	bool getIncludeAllTags() const;
	void setIncludeAllTags(bool includeAllTags);
	std::string getTagFilterValue() const;
	void setTagFilterValue(const std::string &tagFilterValue);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	int getMaxResult() const;
	void setMaxResult(int maxResult);
	std::string getFuzzyType() const;
	void setFuzzyType(const std::string &fuzzyType);

private:
	std::string tagFilterKey_;
	std::string regionId_;
	std::string nextToken_;
	bool includeAllTags_;
	std::string tagFilterValue_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string resourceType_;
	int maxResult_;
	std::string fuzzyType_;
};
} // namespace Model
} // namespace Tag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_TAG_MODEL_LISTRESOURCESBYTAGREQUEST_H_
