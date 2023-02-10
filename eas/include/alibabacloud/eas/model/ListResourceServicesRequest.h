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

#ifndef ALIBABACLOUD_EAS_MODEL_LISTRESOURCESERVICESREQUEST_H_
#define ALIBABACLOUD_EAS_MODEL_LISTRESOURCESERVICESREQUEST_H_

#include <alibabacloud/eas/EasExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eas {
namespace Model {
class ALIBABACLOUD_EAS_EXPORT ListResourceServicesRequest : public RoaServiceRequest {
public:
	ListResourceServicesRequest();
	~ListResourceServicesRequest();
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);

private:
	std::string resourceId_;
	int pageSize_;
	std::string clusterId_;
	int pageNumber_;
};
} // namespace Model
} // namespace Eas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EAS_MODEL_LISTRESOURCESERVICESREQUEST_H_
