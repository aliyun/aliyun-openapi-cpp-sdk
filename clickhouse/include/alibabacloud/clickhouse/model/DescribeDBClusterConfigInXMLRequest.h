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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEDBCLUSTERCONFIGINXMLREQUEST_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEDBCLUSTERCONFIGINXMLREQUEST_H_

#include <alibabacloud/clickhouse/ClickhouseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Clickhouse {
namespace Model {
class ALIBABACLOUD_CLICKHOUSE_EXPORT DescribeDBClusterConfigInXMLRequest : public RpcServiceRequest {
public:
	DescribeDBClusterConfigInXMLRequest();
	~DescribeDBClusterConfigInXMLRequest();
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	std::string dBClusterId_;
	std::string regionId_;
};
} // namespace Model
} // namespace Clickhouse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBEDBCLUSTERCONFIGINXMLREQUEST_H_
