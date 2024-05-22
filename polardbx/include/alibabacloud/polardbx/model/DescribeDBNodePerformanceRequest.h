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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBNODEPERFORMANCEREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBNODEPERFORMANCEREQUEST_H_

#include <alibabacloud/polardbx/PolardbxExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardbx {
namespace Model {
class ALIBABACLOUD_POLARDBX_EXPORT DescribeDBNodePerformanceRequest : public RpcServiceRequest {
public:
	DescribeDBNodePerformanceRequest();
	~DescribeDBNodePerformanceRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getDBNodeRole() const;
	void setDBNodeRole(const std::string &dBNodeRole);
	std::string getCharacterType() const;
	void setCharacterType(const std::string &characterType);
	std::string getDBInstanceName() const;
	void setDBInstanceName(const std::string &dBInstanceName);
	std::string getDBNodeIds() const;
	void setDBNodeIds(const std::string &dBNodeIds);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getKey() const;
	void setKey(const std::string &key);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);

private:
	std::string startTime_;
	std::string dBNodeRole_;
	std::string characterType_;
	std::string dBInstanceName_;
	std::string dBNodeIds_;
	std::string regionId_;
	std::string key_;
	std::string endTime_;
};
} // namespace Model
} // namespace Polardbx
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBNODEPERFORMANCEREQUEST_H_
