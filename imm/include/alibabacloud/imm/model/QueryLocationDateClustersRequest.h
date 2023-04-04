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

#ifndef ALIBABACLOUD_IMM_MODEL_QUERYLOCATIONDATECLUSTERSREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_QUERYLOCATIONDATECLUSTERSREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT QueryLocationDateClustersRequest : public RpcServiceRequest {
public:
	struct LocationDateClusterEndTimeRange {
		std::string start;
		std::string end;
	};
	struct LocationDateClusterStartTimeRange {
		std::string start;
		std::string end;
	};
	struct Address {
		std::string country;
		std::string province;
		std::string city;
		std::string district;
		std::string language;
		std::string addressLine;
		std::string township;
	};
	struct CreateTimeRange {
		std::string start;
		std::string end;
	};
	struct UpdateTimeRange {
		std::string start;
		std::string end;
	};
	QueryLocationDateClustersRequest();
	~QueryLocationDateClustersRequest();
	std::string getCustomLabels() const;
	void setCustomLabels(const std::string &customLabels);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::vector<std::string> getLocationDateClusterLevels() const;
	void setLocationDateClusterLevels(const std::vector<std::string> &locationDateClusterLevels);
	std::string getSort() const;
	void setSort(const std::string &sort);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	LocationDateClusterEndTimeRange getLocationDateClusterEndTimeRange() const;
	void setLocationDateClusterEndTimeRange(const LocationDateClusterEndTimeRange &locationDateClusterEndTimeRange);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getDatasetName() const;
	void setDatasetName(const std::string &datasetName);
	LocationDateClusterStartTimeRange getLocationDateClusterStartTimeRange() const;
	void setLocationDateClusterStartTimeRange(const LocationDateClusterStartTimeRange &locationDateClusterStartTimeRange);
	Address getAddress() const;
	void setAddress(const Address &address);
	CreateTimeRange getCreateTimeRange() const;
	void setCreateTimeRange(const CreateTimeRange &createTimeRange);
	UpdateTimeRange getUpdateTimeRange() const;
	void setUpdateTimeRange(const UpdateTimeRange &updateTimeRange);
	std::string getObjectId() const;
	void setObjectId(const std::string &objectId);

private:
	std::string customLabels_;
	std::string order_;
	std::string projectName_;
	std::vector<std::string> locationDateClusterLevels_;
	std::string sort_;
	int maxResults_;
	LocationDateClusterEndTimeRange locationDateClusterEndTimeRange_;
	std::string title_;
	std::string nextToken_;
	std::string datasetName_;
	LocationDateClusterStartTimeRange locationDateClusterStartTimeRange_;
	Address address_;
	CreateTimeRange createTimeRange_;
	UpdateTimeRange updateTimeRange_;
	std::string objectId_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_QUERYLOCATIONDATECLUSTERSREQUEST_H_
