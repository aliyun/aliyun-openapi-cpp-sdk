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

#ifndef ALIBABACLOUD_IMM_MODEL_QUERYFIGURECLUSTERSREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_QUERYFIGURECLUSTERSREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT QueryFigureClustersRequest : public RpcServiceRequest {
public:
	struct CreateTimeRange {
		std::string start;
		std::string end;
	};
	struct UpdateTimeRange {
		std::string start;
		std::string end;
	};
	QueryFigureClustersRequest();
	~QueryFigureClustersRequest();
	std::string getCustomLabels() const;
	void setCustomLabels(const std::string &customLabels);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getDatasetName() const;
	void setDatasetName(const std::string &datasetName);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getSort() const;
	void setSort(const std::string &sort);
	CreateTimeRange getCreateTimeRange() const;
	void setCreateTimeRange(const CreateTimeRange &createTimeRange);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	bool getWithTotalCount() const;
	void setWithTotalCount(bool withTotalCount);
	UpdateTimeRange getUpdateTimeRange() const;
	void setUpdateTimeRange(const UpdateTimeRange &updateTimeRange);

private:
	std::string customLabels_;
	std::string nextToken_;
	std::string datasetName_;
	std::string order_;
	std::string projectName_;
	std::string sort_;
	CreateTimeRange createTimeRange_;
	long maxResults_;
	bool withTotalCount_;
	UpdateTimeRange updateTimeRange_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_QUERYFIGURECLUSTERSREQUEST_H_
