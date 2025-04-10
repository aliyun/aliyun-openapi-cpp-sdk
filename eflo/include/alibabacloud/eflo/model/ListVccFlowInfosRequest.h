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

#ifndef ALIBABACLOUD_EFLO_MODEL_LISTVCCFLOWINFOSREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_LISTVCCFLOWINFOSREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT ListVccFlowInfosRequest : public RpcServiceRequest {
public:
	ListVccFlowInfosRequest();
	~ListVccFlowInfosRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getFrom() const;
	void setFrom(long from);
	long getTo() const;
	void setTo(long to);
	std::string getVccId() const;
	void setVccId(const std::string &vccId);
	std::string getMetricName() const;
	void setMetricName(const std::string &metricName);
	std::string getDirection() const;
	void setDirection(const std::string &direction);

private:
	std::string regionId_;
	long from_;
	long to_;
	std::string vccId_;
	std::string metricName_;
	std::string direction_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_LISTVCCFLOWINFOSREQUEST_H_
