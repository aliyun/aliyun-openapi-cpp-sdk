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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBECONFIGHISTORYREQUEST_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBECONFIGHISTORYREQUEST_H_

#include <alibabacloud/clickhouse/ClickhouseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Clickhouse {
namespace Model {
class ALIBABACLOUD_CLICKHOUSE_EXPORT DescribeConfigHistoryRequest : public RpcServiceRequest {
public:
	DescribeConfigHistoryRequest();
	~DescribeConfigHistoryRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);

private:
	std::string startTime_;
	std::string dBClusterId_;
	std::string endTime_;
};
} // namespace Model
} // namespace Clickhouse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBECONFIGHISTORYREQUEST_H_
