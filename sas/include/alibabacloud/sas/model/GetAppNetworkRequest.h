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

#ifndef ALIBABACLOUD_SAS_MODEL_GETAPPNETWORKREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_GETAPPNETWORKREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT GetAppNetworkRequest : public RpcServiceRequest {
public:
	GetAppNetworkRequest();
	~GetAppNetworkRequest();
	long getStartTime() const;
	void setStartTime(long startTime);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);

private:
	long startTime_;
	long endTime_;
	std::string clusterId_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_GETAPPNETWORKREQUEST_H_
