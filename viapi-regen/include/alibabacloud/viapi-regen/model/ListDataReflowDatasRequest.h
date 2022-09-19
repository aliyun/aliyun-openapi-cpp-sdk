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

#ifndef ALIBABACLOUD_VIAPI_REGEN_MODEL_LISTDATAREFLOWDATASREQUEST_H_
#define ALIBABACLOUD_VIAPI_REGEN_MODEL_LISTDATAREFLOWDATASREQUEST_H_

#include <alibabacloud/viapi-regen/Viapi_regenExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Viapi_regen {
namespace Model {
class ALIBABACLOUD_VIAPI_REGEN_EXPORT ListDataReflowDatasRequest : public RpcServiceRequest {
public:
	ListDataReflowDatasRequest();
	~ListDataReflowDatasRequest();
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getImageName() const;
	void setImageName(const std::string &imageName);
	long getPageSize() const;
	void setPageSize(long pageSize);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	long getServiceId() const;
	void setServiceId(long serviceId);
	std::string getCategory() const;
	void setCategory(const std::string &category);

private:
	long startTime_;
	std::string imageName_;
	long pageSize_;
	long endTime_;
	long currentPage_;
	long serviceId_;
	std::string category_;
};
} // namespace Model
} // namespace Viapi_regen
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VIAPI_REGEN_MODEL_LISTDATAREFLOWDATASREQUEST_H_
