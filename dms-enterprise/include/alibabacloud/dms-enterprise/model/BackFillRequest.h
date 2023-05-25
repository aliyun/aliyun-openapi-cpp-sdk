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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_BACKFILLREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_BACKFILLREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT BackFillRequest : public RpcServiceRequest {
public:
	BackFillRequest();
	~BackFillRequest();
	long getDagId() const;
	void setDagId(long dagId);
	long getTid() const;
	void setTid(long tid);
	bool getIsTriggerSubTree() const;
	void setIsTriggerSubTree(bool isTriggerSubTree);
	std::string getBackFillDateEnd() const;
	void setBackFillDateEnd(const std::string &backFillDateEnd);
	long getHistoryDagId() const;
	void setHistoryDagId(long historyDagId);
	std::vector<long> getStartNodeIds() const;
	void setStartNodeIds(const std::vector<long> &startNodeIds);
	std::vector<long> getFilterNodeIds() const;
	void setFilterNodeIds(const std::vector<long> &filterNodeIds);
	std::string getBackFillDateBegin() const;
	void setBackFillDateBegin(const std::string &backFillDateBegin);
	std::string getBackFillDate() const;
	void setBackFillDate(const std::string &backFillDate);
	bool getAsc() const;
	void setAsc(bool asc);
	int getInterval() const;
	void setInterval(int interval);

private:
	long dagId_;
	long tid_;
	bool isTriggerSubTree_;
	std::string backFillDateEnd_;
	long historyDagId_;
	std::vector<long> startNodeIds_;
	std::vector<long> filterNodeIds_;
	std::string backFillDateBegin_;
	std::string backFillDate_;
	bool asc_;
	int interval_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_BACKFILLREQUEST_H_
