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

#ifndef ALIBABACLOUD_EAS_MODEL_DESCRIBESERVICELOGREQUEST_H_
#define ALIBABACLOUD_EAS_MODEL_DESCRIBESERVICELOGREQUEST_H_

#include <alibabacloud/eas/EasExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eas {
namespace Model {
class ALIBABACLOUD_EAS_EXPORT DescribeServiceLogRequest : public RoaServiceRequest {
public:
	DescribeServiceLogRequest();
	~DescribeServiceLogRequest();
	std::string getIp() const;
	void setIp(const std::string &ip);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	long getPageNum() const;
	void setPageNum(long pageNum);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);

private:
	std::string ip_;
	long pageSize_;
	std::string endTime_;
	std::string serviceName_;
	std::string startTime_;
	std::string clusterId_;
	long pageNum_;
	std::string keyword_;
};
} // namespace Model
} // namespace Eas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EAS_MODEL_DESCRIBESERVICELOGREQUEST_H_
