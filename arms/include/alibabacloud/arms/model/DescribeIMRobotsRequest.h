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

#ifndef ALIBABACLOUD_ARMS_MODEL_DESCRIBEIMROBOTSREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_DESCRIBEIMROBOTSREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT DescribeIMRobotsRequest : public RpcServiceRequest {
public:
	DescribeIMRobotsRequest();
	~DescribeIMRobotsRequest();
	std::string getRobotIds() const;
	void setRobotIds(const std::string &robotIds);
	std::string getRobotName() const;
	void setRobotName(const std::string &robotName);
	long getSize() const;
	void setSize(long size);
	long getPage() const;
	void setPage(long page);

private:
	std::string robotIds_;
	std::string robotName_;
	long size_;
	long page_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_DESCRIBEIMROBOTSREQUEST_H_
