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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_EXPORTCONVERSATIONDETAILSREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_EXPORTCONVERSATIONDETAILSREQUEST_H_

#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace VoiceNavigator {
namespace Model {
class ALIBABACLOUD_VOICENAVIGATOR_EXPORT ExportConversationDetailsRequest : public RpcServiceRequest {
public:
	ExportConversationDetailsRequest();
	~ExportConversationDetailsRequest();
	long getBeginTimeLeftRange() const;
	void setBeginTimeLeftRange(long beginTimeLeftRange);
	std::string getCallingNumber() const;
	void setCallingNumber(const std::string &callingNumber);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	long getBeginTimeRightRange() const;
	void setBeginTimeRightRange(long beginTimeRightRange);
	std::vector<std::string> getOptions() const;
	void setOptions(const std::vector<std::string> &options);

private:
	long beginTimeLeftRange_;
	std::string callingNumber_;
	std::string instanceId_;
	long beginTimeRightRange_;
	std::vector<std::string> options_;
};
} // namespace Model
} // namespace VoiceNavigator
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_EXPORTCONVERSATIONDETAILSREQUEST_H_
