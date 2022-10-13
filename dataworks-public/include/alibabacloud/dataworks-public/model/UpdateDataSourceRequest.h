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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEDATASOURCEREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEDATASOURCEREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT UpdateDataSourceRequest : public RpcServiceRequest {
public:
	UpdateDataSourceRequest();
	~UpdateDataSourceRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getContent() const;
	void setContent(const std::string &content);
	int getEnvType() const;
	void setEnvType(int envType);
	long getDataSourceId() const;
	void setDataSourceId(long dataSourceId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string description_;
	std::string content_;
	int envType_;
	long dataSourceId_;
	std::string status_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEDATASOURCEREQUEST_H_
