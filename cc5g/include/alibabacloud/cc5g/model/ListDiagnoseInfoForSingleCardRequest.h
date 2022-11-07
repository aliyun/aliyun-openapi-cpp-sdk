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

#ifndef ALIBABACLOUD_CC5G_MODEL_LISTDIAGNOSEINFOFORSINGLECARDREQUEST_H_
#define ALIBABACLOUD_CC5G_MODEL_LISTDIAGNOSEINFOFORSINGLECARDREQUEST_H_

#include <alibabacloud/cc5g/CC5GExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CC5G {
namespace Model {
class ALIBABACLOUD_CC5G_EXPORT ListDiagnoseInfoForSingleCardRequest : public RpcServiceRequest {
public:
	ListDiagnoseInfoForSingleCardRequest();
	~ListDiagnoseInfoForSingleCardRequest();
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getSourceType() const;
	void setSourceType(const std::string &sourceType);
	std::string getRegionNo() const;
	void setRegionNo(const std::string &regionNo);
	std::string getWirelessCloudConnectorId() const;
	void setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string source_;
	std::string nextToken_;
	std::string sourceType_;
	std::string regionNo_;
	std::string wirelessCloudConnectorId_;
	int maxResults_;
	std::string status_;
};
} // namespace Model
} // namespace CC5G
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CC5G_MODEL_LISTDIAGNOSEINFOFORSINGLECARDREQUEST_H_
