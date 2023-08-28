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

#ifndef ALIBABACLOUD_AVATAR_MODEL_QUERYVIDEOTASKINFOREQUEST_H_
#define ALIBABACLOUD_AVATAR_MODEL_QUERYVIDEOTASKINFOREQUEST_H_

#include <alibabacloud/avatar/AvatarExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Avatar {
namespace Model {
class ALIBABACLOUD_AVATAR_EXPORT QueryVideoTaskInfoRequest : public RpcServiceRequest {
public:
	struct App {
		std::string appId;
	};
	QueryVideoTaskInfoRequest();
	~QueryVideoTaskInfoRequest();
	App getApp() const;
	void setApp(const App &app);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	int getType() const;
	void setType(int type);
	std::string getOrderById() const;
	void setOrderById(const std::string &orderById);
	int getPageNo() const;
	void setPageNo(int pageNo);
	long getTenantId() const;
	void setTenantId(long tenantId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTaskUuid() const;
	void setTaskUuid(const std::string &taskUuid);
	int getStatus() const;
	void setStatus(int status);

private:
	App app_;
	std::string title_;
	int type_;
	std::string orderById_;
	int pageNo_;
	long tenantId_;
	int pageSize_;
	std::string taskUuid_;
	int status_;
};
} // namespace Model
} // namespace Avatar
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AVATAR_MODEL_QUERYVIDEOTASKINFOREQUEST_H_
