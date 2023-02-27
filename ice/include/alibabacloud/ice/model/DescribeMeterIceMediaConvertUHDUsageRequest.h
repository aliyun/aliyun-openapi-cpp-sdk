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

#ifndef ALIBABACLOUD_ICE_MODEL_DESCRIBEMETERICEMEDIACONVERTUHDUSAGEREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_DESCRIBEMETERICEMEDIACONVERTUHDUSAGEREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT DescribeMeterIceMediaConvertUHDUsageRequest : public RpcServiceRequest {
public:
	DescribeMeterIceMediaConvertUHDUsageRequest();
	~DescribeMeterIceMediaConvertUHDUsageRequest();
	long getStartTs() const;
	void setStartTs(long startTs);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getEndTs() const;
	void setEndTs(long endTs);
	std::string getInterval() const;
	void setInterval(const std::string &interval);

private:
	long startTs_;
	std::string regionId_;
	long endTs_;
	std::string interval_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_DESCRIBEMETERICEMEDIACONVERTUHDUSAGEREQUEST_H_
