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

#ifndef ALIBABACLOUD_APPSTREAM_CENTER_MODEL_GETCONNECTIONTICKETREQUEST_H_
#define ALIBABACLOUD_APPSTREAM_CENTER_MODEL_GETCONNECTIONTICKETREQUEST_H_

#include <alibabacloud/appstream-center/Appstream_centerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Appstream_center {
namespace Model {
class ALIBABACLOUD_APPSTREAM_CENTER_EXPORT GetConnectionTicketRequest : public RpcServiceRequest {
public:
	struct FileInfos {
		std::string fileRegion;
		std::string driveId;
		std::string fileName;
		std::string filePath;
		std::string driveType;
		std::string fileId;
	};
	GetConnectionTicketRequest();
	~GetConnectionTicketRequest();
	std::string getBizRegionId() const;
	void setBizRegionId(const std::string &bizRegionId);
	std::string getAppStartParam() const;
	void setAppStartParam(const std::string &appStartParam);
	std::string getProductType() const;
	void setProductType(const std::string &productType);
	std::string getEndUserId() const;
	void setEndUserId(const std::string &endUserId);
	std::vector<FileInfos> getFileInfos() const;
	void setFileInfos(const std::vector<FileInfos> &fileInfos);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getAppVersion() const;
	void setAppVersion(const std::string &appVersion);
	std::vector<std::string> getAppInstanceGroupIdList() const;
	void setAppInstanceGroupIdList(const std::vector<std::string> &appInstanceGroupIdList);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getAppInstanceId() const;
	void setAppInstanceId(const std::string &appInstanceId);

private:
	std::string bizRegionId_;
	std::string appStartParam_;
	std::string productType_;
	std::string endUserId_;
	std::vector<FileInfos> fileInfos_;
	std::string taskId_;
	std::string appVersion_;
	std::vector<std::string> appInstanceGroupIdList_;
	std::string appId_;
	std::string appInstanceId_;
};
} // namespace Model
} // namespace Appstream_center
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_APPSTREAM_CENTER_MODEL_GETCONNECTIONTICKETREQUEST_H_
