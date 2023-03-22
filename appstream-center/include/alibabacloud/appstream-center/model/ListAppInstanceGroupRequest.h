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

#ifndef ALIBABACLOUD_APPSTREAM_CENTER_MODEL_LISTAPPINSTANCEGROUPREQUEST_H_
#define ALIBABACLOUD_APPSTREAM_CENTER_MODEL_LISTAPPINSTANCEGROUPREQUEST_H_

#include <alibabacloud/appstream-center/Appstream_centerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Appstream_center {
namespace Model {
class ALIBABACLOUD_APPSTREAM_CENTER_EXPORT ListAppInstanceGroupRequest : public RpcServiceRequest {
public:
	ListAppInstanceGroupRequest();
	~ListAppInstanceGroupRequest();
	std::string getBizRegionId() const;
	void setBizRegionId(const std::string &bizRegionId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getProductType() const;
	void setProductType(const std::string &productType);
	std::string getAppCenterImageId() const;
	void setAppCenterImageId(const std::string &appCenterImageId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getNodeInstanceType() const;
	void setNodeInstanceType(const std::string &nodeInstanceType);
	std::string getAppInstanceGroupName() const;
	void setAppInstanceGroupName(const std::string &appInstanceGroupName);
	std::string getAppInstanceGroupId() const;
	void setAppInstanceGroupId(const std::string &appInstanceGroupId);
	std::vector<std::string> getStatus() const;
	void setStatus(const std::vector<std::string> &status);

private:
	std::string bizRegionId_;
	int pageNumber_;
	std::string productType_;
	std::string appCenterImageId_;
	std::string regionId_;
	int pageSize_;
	std::string nodeInstanceType_;
	std::string appInstanceGroupName_;
	std::string appInstanceGroupId_;
	std::vector<std::string> status_;
};
} // namespace Model
} // namespace Appstream_center
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_APPSTREAM_CENTER_MODEL_LISTAPPINSTANCEGROUPREQUEST_H_
