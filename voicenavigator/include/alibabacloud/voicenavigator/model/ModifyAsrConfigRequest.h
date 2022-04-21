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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYASRCONFIGREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYASRCONFIGREQUEST_H_

#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace VoiceNavigator {
namespace Model {
class ALIBABACLOUD_VOICENAVIGATOR_EXPORT ModifyAsrConfigRequest : public RpcServiceRequest {
public:
	ModifyAsrConfigRequest();
	~ModifyAsrConfigRequest();
	std::string getAsrVocabularyId() const;
	void setAsrVocabularyId(const std::string &asrVocabularyId);
	std::string getAsrClassVocabularyId() const;
	void setAsrClassVocabularyId(const std::string &asrClassVocabularyId);
	std::string getEntryId() const;
	void setEntryId(const std::string &entryId);
	std::string getAsrCustomizationId() const;
	void setAsrCustomizationId(const std::string &asrCustomizationId);
	int getConfigLevel() const;
	void setConfigLevel(int configLevel);
	std::string getAsrAcousticModelId() const;
	void setAsrAcousticModelId(const std::string &asrAcousticModelId);

private:
	std::string asrVocabularyId_;
	std::string asrClassVocabularyId_;
	std::string entryId_;
	std::string asrCustomizationId_;
	int configLevel_;
	std::string asrAcousticModelId_;
};
} // namespace Model
} // namespace VoiceNavigator
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYASRCONFIGREQUEST_H_
