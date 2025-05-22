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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCMETRICLISTREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCMETRICLISTREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeRCMetricListRequest : public RpcServiceRequest {
public:
	DescribeRCMetricListRequest();
	~DescribeRCMetricListRequest();
	std::string getExpress() const;
	void setExpress(const std::string &express);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getMetricName() const;
	void setMetricName(const std::string &metricName);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getLength() const;
	void setLength(const std::string &length);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getDimensions() const;
	void setDimensions(const std::string &dimensions);

private:
	std::string express_;
	std::string startTime_;
	std::string regionId_;
	std::string nextToken_;
	std::string metricName_;
	std::string period_;
	std::string length_;
	std::string endTime_;
	std::string instanceId_;
	std::string dimensions_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCMETRICLISTREQUEST_H_
