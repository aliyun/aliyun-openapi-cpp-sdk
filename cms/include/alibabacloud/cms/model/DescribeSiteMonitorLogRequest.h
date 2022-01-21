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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORLOGREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORLOGREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeSiteMonitorLogRequest : public RpcServiceRequest {
public:
	DescribeSiteMonitorLogRequest();
	~DescribeSiteMonitorLogRequest();
	std::string getCity() const;
	void setCity(const std::string &city);
	std::string getIsp() const;
	void setIsp(const std::string &isp);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getTaskIds() const;
	void setTaskIds(const std::string &taskIds);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getMetricName() const;
	void setMetricName(const std::string &metricName);
	int getLength() const;
	void setLength(int length);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getFilter() const;
	void setFilter(const std::string &filter);
	std::string getDimensions() const;
	void setDimensions(const std::string &dimensions);

private:
	std::string city_;
	std::string isp_;
	std::string startTime_;
	std::string taskIds_;
	std::string nextToken_;
	std::string metricName_;
	int length_;
	std::string endTime_;
	std::string filter_;
	std::string dimensions_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORLOGREQUEST_H_
