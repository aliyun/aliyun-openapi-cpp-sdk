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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_DOWNLOADDATATRACKRESULTREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_DOWNLOADDATATRACKRESULTREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT DownloadDataTrackResultRequest : public RpcServiceRequest {
public:
	struct ColumnFilter {
		std::string betweenStart;
		std::string betweenEnd;
		std::string columnName;
		std::string value;
		std::string _operator;
		std::string string;
		std::vector<std::string> inList;
	};
	DownloadDataTrackResultRequest();
	~DownloadDataTrackResultRequest();
	std::string getFilterStartTime() const;
	void setFilterStartTime(const std::string &filterStartTime);
	std::vector<std::string> getFilterTypeList() const;
	void setFilterTypeList(const std::vector<std::string> &filterTypeList);
	long getTid() const;
	void setTid(long tid);
	std::string getRollbackSQLType() const;
	void setRollbackSQLType(const std::string &rollbackSQLType);
	std::vector<long> getEventIdList() const;
	void setEventIdList(const std::vector<long> &eventIdList);
	long getOrderId() const;
	void setOrderId(long orderId);
	std::vector<std::string> getFilterTableList() const;
	void setFilterTableList(const std::vector<std::string> &filterTableList);
	std::string getFilterEndTime() const;
	void setFilterEndTime(const std::string &filterEndTime);
	ColumnFilter getColumnFilter() const;
	void setColumnFilter(const ColumnFilter &columnFilter);

private:
	std::string filterStartTime_;
	std::vector<std::string> filterTypeList_;
	long tid_;
	std::string rollbackSQLType_;
	std::vector<long> eventIdList_;
	long orderId_;
	std::vector<std::string> filterTableList_;
	std::string filterEndTime_;
	ColumnFilter columnFilter_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_DOWNLOADDATATRACKRESULTREQUEST_H_
