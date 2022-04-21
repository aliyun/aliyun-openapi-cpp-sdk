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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_GETASRCONFIGRESULT_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_GETASRCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>

namespace AlibabaCloud
{
	namespace VoiceNavigator
	{
		namespace Model
		{
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT GetAsrConfigResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string asrVocabularyId;
					std::string asrCustomizationId;
					std::string asrAcousticModelId;
					std::string asrClassVocabularyId;
				};


				GetAsrConfigResult();
				explicit GetAsrConfigResult(const std::string &payload);
				~GetAsrConfigResult();
				int getHttpStatusCode()const;
				std::string getErrorMsg()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				std::string errorMsg_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_GETASRCONFIGRESULT_H_