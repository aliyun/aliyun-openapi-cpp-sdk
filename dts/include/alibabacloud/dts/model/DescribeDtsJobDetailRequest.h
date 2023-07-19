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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBDETAILREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBDETAILREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT DescribeDtsJobDetailRequest : public RpcServiceRequest {
public:
	DescribeDtsJobDetailRequest();
	~DescribeDtsJobDetailRequest();
	bool getSyncSubJobHistory() const;
	void setSyncSubJobHistory(bool syncSubJobHistory);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDtsJobId() const;
	void setDtsJobId(const std::string &dtsJobId);
	std::string getDtsInstanceID() const;
	void setDtsInstanceID(const std::string &dtsInstanceID);
	std::string getSynchronizationDirection() const;
	void setSynchronizationDirection(const std::string &synchronizationDirection);

private:
	bool syncSubJobHistory_;
	std::string regionId_;
	std::string dtsJobId_;
	std::string dtsInstanceID_;
	std::string synchronizationDirection_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBDETAILREQUEST_H_
