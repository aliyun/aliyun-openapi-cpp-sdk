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

#ifndef ALIBABACLOUD_CC5G_MODEL_CREATEBATCHOPERATECARDSTASKREQUEST_H_
#define ALIBABACLOUD_CC5G_MODEL_CREATEBATCHOPERATECARDSTASKREQUEST_H_

#include <alibabacloud/cc5g/CC5GExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CC5G {
namespace Model {
class ALIBABACLOUD_CC5G_EXPORT CreateBatchOperateCardsTaskRequest : public RpcServiceRequest {
public:
	CreateBatchOperateCardsTaskRequest();
	~CreateBatchOperateCardsTaskRequest();
	std::vector<std::string> getIccids() const;
	void setIccids(const std::vector<std::string> &iccids);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	long getThreshold() const;
	void setThreshold(long threshold);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEffectType() const;
	void setEffectType(const std::string &effectType);
	std::vector<std::string> getWirelessCloudConnectorIds() const;
	void setWirelessCloudConnectorIds(const std::vector<std::string> &wirelessCloudConnectorIds);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getOperateType() const;
	void setOperateType(const std::string &operateType);
	std::string getIccidsOssFilePath() const;
	void setIccidsOssFilePath(const std::string &iccidsOssFilePath);

private:
	std::vector<std::string> iccids_;
	std::string clientToken_;
	std::string description_;
	long threshold_;
	std::string regionId_;
	std::string effectType_;
	std::vector<std::string> wirelessCloudConnectorIds_;
	bool dryRun_;
	std::string name_;
	std::string operateType_;
	std::string iccidsOssFilePath_;
};
} // namespace Model
} // namespace CC5G
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CC5G_MODEL_CREATEBATCHOPERATECARDSTASKREQUEST_H_
