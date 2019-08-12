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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYARTEXTENSIONRESULT_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYARTEXTENSIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT QueryArtExtensionResult : public ServiceResult
			{
			public:


				QueryArtExtensionResult();
				explicit QueryArtExtensionResult(const std::string &payload);
				~QueryArtExtensionResult();
				std::string getObjectType()const;
				std::string getMaterialsAndTechniques()const;
				std::string getInscriptionsAndMarkings()const;
				std::string getReference()const;
				std::string getDateOrPeriod()const;
				std::string getDimensions()const;
				std::string getTitle()const;
				std::string getFeatures()const;
				std::string getMaker()const;
				std::string getSubject()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string objectType_;
				std::string materialsAndTechniques_;
				std::string inscriptionsAndMarkings_;
				std::string reference_;
				std::string dateOrPeriod_;
				std::string dimensions_;
				std::string title_;
				std::string features_;
				std::string maker_;
				std::string subject_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYARTEXTENSIONRESULT_H_