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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBERDSPERFORMANCEREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBERDSPERFORMANCEREQUEST_H_

#include <alibabacloud/drds/DrdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Drds {
namespace Model {
class ALIBABACLOUD_DRDS_EXPORT DescribeRDSPerformanceRequest : public RpcServiceRequest {
public:
	DescribeRDSPerformanceRequest();
	~DescribeRDSPerformanceRequest();
	std::string getKeys() const;
	void setKeys(const std::string &keys);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getRdsInstanceId() const;
	void setRdsInstanceId(const std::string &rdsInstanceId);
	std::string getDrdsInstanceId() const;
	void setDrdsInstanceId(const std::string &drdsInstanceId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDbInstType() const;
	void setDbInstType(const std::string &dbInstType);

private:
	std::string keys_;
	long endTime_;
	long startTime_;
	std::string rdsInstanceId_;
	std::string drdsInstanceId_;
	std::string accessKeyId_;
	std::string dbInstType_;
};
} // namespace Model
} // namespace Drds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBERDSPERFORMANCEREQUEST_H_
