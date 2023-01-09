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

#ifndef ALIBABACLOUD_PTS_MODEL_GETJMETERSAMPLEMETRICSREQUEST_H_
#define ALIBABACLOUD_PTS_MODEL_GETJMETERSAMPLEMETRICSREQUEST_H_

#include <alibabacloud/pts/PTSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace PTS {
namespace Model {
class ALIBABACLOUD_PTS_EXPORT GetJMeterSampleMetricsRequest : public RpcServiceRequest {
public:
	GetJMeterSampleMetricsRequest();
	~GetJMeterSampleMetricsRequest();
	std::string getReportId() const;
	void setReportId(const std::string &reportId);
	int getSamplerId() const;
	void setSamplerId(int samplerId);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getBeginTime() const;
	void setBeginTime(long beginTime);

private:
	std::string reportId_;
	int samplerId_;
	long endTime_;
	long beginTime_;
};
} // namespace Model
} // namespace PTS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PTS_MODEL_GETJMETERSAMPLEMETRICSREQUEST_H_
