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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTDATASOURCEFEATUREVIEWSREQUEST_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTDATASOURCEFEATUREVIEWSREQUEST_H_

#include <alibabacloud/paifeaturestore/PaiFeatureStoreExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace PaiFeatureStore {
namespace Model {
class ALIBABACLOUD_PAIFEATURESTORE_EXPORT ListDatasourceFeatureViewsRequest : public RoaServiceRequest {
public:
	ListDatasourceFeatureViewsRequest();
	~ListDatasourceFeatureViewsRequest();
	std::string getType() const;
	void setType(const std::string &type);
	std::string getStartDate() const;
	void setStartDate(const std::string &startDate);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getProjectId() const;
	void setProjectId(const std::string &projectId);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	bool getAll() const;
	void setAll(bool all);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	bool getShowStorageUsage() const;
	void setShowStorageUsage(bool showStorageUsage);
	bool getVerbose() const;
	void setVerbose(bool verbose);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getEndDate() const;
	void setEndDate(const std::string &endDate);
	std::string getDatasourceId() const;
	void setDatasourceId(const std::string &datasourceId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);

private:
	std::string type_;
	std::string startDate_;
	int pageNumber_;
	int pageSize_;
	std::string projectId_;
	std::string order_;
	bool all_;
	std::string projectName_;
	bool showStorageUsage_;
	bool verbose_;
	std::string instanceId_;
	std::string endDate_;
	std::string datasourceId_;
	std::string name_;
	std::string sortBy_;
};
} // namespace Model
} // namespace PaiFeatureStore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTDATASOURCEFEATUREVIEWSREQUEST_H_
