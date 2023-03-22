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

#ifndef ALIBABACLOUD_APPSTREAM_CENTER_MODEL_DELETEAPPINSTANCESREQUEST_H_
#define ALIBABACLOUD_APPSTREAM_CENTER_MODEL_DELETEAPPINSTANCESREQUEST_H_

#include <alibabacloud/appstream-center/Appstream_centerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Appstream_center {
namespace Model {
class ALIBABACLOUD_APPSTREAM_CENTER_EXPORT DeleteAppInstancesRequest : public RpcServiceRequest {
public:
	DeleteAppInstancesRequest();
	~DeleteAppInstancesRequest();
	std::vector<std::string> getAppInstanceIds() const;
	void setAppInstanceIds(const std::vector<std::string> &appInstanceIds);
	std::string getProductType() const;
	void setProductType(const std::string &productType);
	std::string getAppInstanceGroupId() const;
	void setAppInstanceGroupId(const std::string &appInstanceGroupId);

private:
	std::vector<std::string> appInstanceIds_;
	std::string productType_;
	std::string appInstanceGroupId_;
};
} // namespace Model
} // namespace Appstream_center
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_APPSTREAM_CENTER_MODEL_DELETEAPPINSTANCESREQUEST_H_
