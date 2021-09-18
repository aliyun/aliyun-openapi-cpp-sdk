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

#ifndef ALIBABACLOUD_VOD_MODEL_UPDATEDETECTIONTEMPLATEREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_UPDATEDETECTIONTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT UpdateDetectionTemplateRequest : public RpcServiceRequest
			{

			public:
				UpdateDetectionTemplateRequest();
				~UpdateDetectionTemplateRequest();

				std::string getLetterSendTime()const;
				void setLetterSendTime(const std::string& letterSendTime);
				bool getAutoLetterSuspect()const;
				void setAutoLetterSuspect(bool autoLetterSuspect);
				std::string getPlatform()const;
				void setPlatform(const std::string& platform);
				bool getAutoLetter()const;
				void setAutoLetter(bool autoLetter);
				std::string getTemplateName()const;
				void setTemplateName(const std::string& templateName);
				bool getAutoEvidence()const;
				void setAutoEvidence(bool autoEvidence);
				std::string getLetterTemplateId()const;
				void setLetterTemplateId(const std::string& letterTemplateId);
				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				bool getAutoEvidenceSuspect()const;
				void setAutoEvidenceSuspect(bool autoEvidenceSuspect);
				std::string getTemplateId()const;
				void setTemplateId(const std::string& templateId);

            private:
				std::string letterSendTime_;
				bool autoLetterSuspect_;
				std::string platform_;
				bool autoLetter_;
				std::string templateName_;
				bool autoEvidence_;
				std::string letterTemplateId_;
				std::string period_;
				bool autoEvidenceSuspect_;
				std::string templateId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_UPDATEDETECTIONTEMPLATEREQUEST_H_