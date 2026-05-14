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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTFEATUREENTITIESREQUEST_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTFEATUREENTITIESREQUEST_H_

#include <alibabacloud/paifeaturestore/PaiFeatureStoreExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace PaiFeatureStore {
namespace Model {
class ALIBABACLOUD_PAIFEATURESTORE_EXPORT ListFeatureEntitiesRequest : public RoaServiceRequest {
public:
	ListFeatureEntitiesRequest();
	~ListFeatureEntitiesRequest();
	std::string getParentFeatureEntityId() const;
	void setParentFeatureEntityId(const std::string &parentFeatureEntityId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getProjectId() const;
	void setProjectId(const std::string &projectId);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::string getOwner() const;
	void setOwner(const std::string &owner);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);

private:
	std::string parentFeatureEntityId_;
	int pageNumber_;
	int pageSize_;
	std::string projectId_;
	std::string order_;
	std::string owner_;
	std::string instanceId_;
	std::string name_;
	std::string sortBy_;
};
} // namespace Model
} // namespace PaiFeatureStore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTFEATUREENTITIESREQUEST_H_
