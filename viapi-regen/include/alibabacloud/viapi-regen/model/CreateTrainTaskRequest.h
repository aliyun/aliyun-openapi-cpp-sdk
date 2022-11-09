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

#ifndef ALIBABACLOUD_VIAPI_REGEN_MODEL_CREATETRAINTASKREQUEST_H_
#define ALIBABACLOUD_VIAPI_REGEN_MODEL_CREATETRAINTASKREQUEST_H_

#include <alibabacloud/viapi-regen/Viapi_regenExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Viapi_regen {
namespace Model {
class ALIBABACLOUD_VIAPI_REGEN_EXPORT CreateTrainTaskRequest : public RpcServiceRequest {
public:
	CreateTrainTaskRequest();
	~CreateTrainTaskRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getTrainMode() const;
	void setTrainMode(const std::string &trainMode);
	std::string getDatasetIds() const;
	void setDatasetIds(const std::string &datasetIds);
	long getPreTrainTaskId() const;
	void setPreTrainTaskId(long preTrainTaskId);
	std::string getAdvancedParameters() const;
	void setAdvancedParameters(const std::string &advancedParameters);
	long getLabelId() const;
	void setLabelId(long labelId);
	std::string getName() const;
	void setName(const std::string &name);
	long getDatasetId() const;
	void setDatasetId(long datasetId);
	std::string getLabelIds() const;
	void setLabelIds(const std::string &labelIds);
	long getWorkspaceId() const;
	void setWorkspaceId(long workspaceId);

private:
	std::string description_;
	std::string trainMode_;
	std::string datasetIds_;
	long preTrainTaskId_;
	std::string advancedParameters_;
	long labelId_;
	std::string name_;
	long datasetId_;
	std::string labelIds_;
	long workspaceId_;
};
} // namespace Model
} // namespace Viapi_regen
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VIAPI_REGEN_MODEL_CREATETRAINTASKREQUEST_H_
