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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTMETACOLLECTIONSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTMETACOLLECTIONSREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListMetaCollectionsRequest : public RpcServiceRequest {
public:
	ListMetaCollectionsRequest();
	~ListMetaCollectionsRequest();
	std::string getCreator() const;
	void setCreator(const std::string &creator);
	std::string getFollower() const;
	void setFollower(const std::string &follower);
	std::string getParentQualifiedName() const;
	void setParentQualifiedName(const std::string &parentQualifiedName);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getCollectionType() const;
	void setCollectionType(const std::string &collectionType);
	std::string getAdministrator() const;
	void setAdministrator(const std::string &administrator);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);

private:
	std::string creator_;
	std::string follower_;
	std::string parentQualifiedName_;
	std::string orderBy_;
	std::string collectionType_;
	std::string administrator_;
	std::string nextToken_;
	int pageSize_;
	std::string keyword_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTMETACOLLECTIONSREQUEST_H_
