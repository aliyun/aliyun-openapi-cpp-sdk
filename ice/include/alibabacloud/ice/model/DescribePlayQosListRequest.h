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

#ifndef ALIBABACLOUD_ICE_MODEL_DESCRIBEPLAYQOSLISTREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_DESCRIBEPLAYQOSLISTREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT DescribePlayQosListRequest : public RpcServiceRequest {
public:
	DescribePlayQosListRequest();
	~DescribePlayQosListRequest();
	std::string getNetwork() const;
	void setNetwork(const std::string &network);
	std::vector<std::string> getMetricTypes() const;
	void setMetricTypes(const std::vector<std::string> &metricTypes);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getEndTs() const;
	void setEndTs(const std::string &endTs);
	std::string getDefinition() const;
	void setDefinition(const std::string &definition);
	std::string getItemConfigs() const;
	void setItemConfigs(const std::string &itemConfigs);
	std::string getOs() const;
	void setOs(const std::string &os);
	std::string getOrderName() const;
	void setOrderName(const std::string &orderName);
	std::string getBeginTs() const;
	void setBeginTs(const std::string &beginTs);
	int getPageNo() const;
	void setPageNo(int pageNo);
	std::string getTerminalType() const;
	void setTerminalType(const std::string &terminalType);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	std::string network_;
	std::vector<std::string> metricTypes_;
	std::string appName_;
	int pageSize_;
	std::string endTs_;
	std::string definition_;
	std::string itemConfigs_;
	std::string os_;
	std::string orderName_;
	std::string beginTs_;
	int pageNo_;
	std::string terminalType_;
	std::string orderType_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_DESCRIBEPLAYQOSLISTREQUEST_H_
