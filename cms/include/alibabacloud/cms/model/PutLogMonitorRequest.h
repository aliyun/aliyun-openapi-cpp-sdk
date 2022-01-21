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

#ifndef ALIBABACLOUD_CMS_MODEL_PUTLOGMONITORREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_PUTLOGMONITORREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT PutLogMonitorRequest : public RpcServiceRequest {
public:
	struct ValueFilter {
		std::string value;
		std::string key;
		std::string _operator;
	};
	struct Groupbys {
		std::string fieldName;
		std::string alias;
	};
	struct Aggregates {
		std::string fieldName;
		std::string function;
		std::string alias;
	};
	PutLogMonitorRequest();
	~PutLogMonitorRequest();
	std::string getSlsLogstore() const;
	void setSlsLogstore(const std::string &slsLogstore);
	std::string getSlsProject() const;
	void setSlsProject(const std::string &slsProject);
	std::vector<ValueFilter> getValueFilter() const;
	void setValueFilter(const std::vector<ValueFilter> &valueFilter);
	std::string getMetricExpress() const;
	void setMetricExpress(const std::string &metricExpress);
	std::string getSlsRegionId() const;
	void setSlsRegionId(const std::string &slsRegionId);
	std::string getMetricName() const;
	void setMetricName(const std::string &metricName);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getTumblingwindows() const;
	void setTumblingwindows(const std::string &tumblingwindows);
	std::string getGroupBy() const;
	void setGroupBy(const std::string &groupBy);
	std::string getValueFilterRelation() const;
	void setValueFilterRelation(const std::string &valueFilterRelation);
	std::string getUnit() const;
	void setUnit(const std::string &unit);
	std::vector<Groupbys> getGroupbys() const;
	void setGroupbys(const std::vector<Groupbys> &groupbys);
	std::string getLogId() const;
	void setLogId(const std::string &logId);
	std::vector<Aggregates> getAggregates() const;
	void setAggregates(const std::vector<Aggregates> &aggregates);

private:
	std::string slsLogstore_;
	std::string slsProject_;
	std::vector<ValueFilter> valueFilter_;
	std::string metricExpress_;
	std::string slsRegionId_;
	std::string metricName_;
	std::string groupId_;
	std::string tumblingwindows_;
	std::string groupBy_;
	std::string valueFilterRelation_;
	std::string unit_;
	std::vector<Groupbys> groupbys_;
	std::string logId_;
	std::vector<Aggregates> aggregates_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_PUTLOGMONITORREQUEST_H_
