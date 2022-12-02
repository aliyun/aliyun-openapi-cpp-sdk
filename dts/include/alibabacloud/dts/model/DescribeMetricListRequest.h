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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEMETRICLISTREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEMETRICLISTREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT DescribeMetricListRequest : public RpcServiceRequest {
public:
	DescribeMetricListRequest();
	~DescribeMetricListRequest();
	std::string getMetricType() const;
	void setMetricType(const std::string &metricType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getAccountId() const;
	void setAccountId(const std::string &accountId);
	std::string getParam() const;
	void setParam(const std::string &param);
	std::string getDtsJobId() const;
	void setDtsJobId(const std::string &dtsJobId);
	std::string getMetricName() const;
	void setMetricName(const std::string &metricName);
	long getPeriod() const;
	void setPeriod(long period);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getEnv() const;
	void setEnv(const std::string &env);
	std::string getOwnerID() const;
	void setOwnerID(const std::string &ownerID);

private:
	std::string metricType_;
	std::string clientToken_;
	long startTime_;
	std::string accessKeyId_;
	std::string accountId_;
	std::string param_;
	std::string dtsJobId_;
	std::string metricName_;
	long period_;
	long endTime_;
	std::string env_;
	std::string ownerID_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEMETRICLISTREQUEST_H_
