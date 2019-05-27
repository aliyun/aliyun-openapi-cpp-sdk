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

#ifndef ALIBABACLOUD_IMM_MODEL_DETECTLOGORESULT_H_
#define ALIBABACLOUD_IMM_MODEL_DETECTLOGORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>

namespace AlibabaCloud
{
	namespace Imm
	{
		namespace Model
		{
			class ALIBABACLOUD_IMM_EXPORT DetectLogoResult : public ServiceResult
			{
			public:
				struct SuccessDetailsItem
				{
					struct LogoBoxDetailItem
					{
						std::string type;
						float score;
						std::string pUID;
						std::vector<std::string> box;
					};
					std::string getImageTime;
					std::string detectTime;
					std::string time;
					std::vector<SuccessDetailsItem::LogoBoxDetailItem> logoBoxDetail;
					std::string srcUri;
				};
				struct FailDetailsItem
				{
					std::string reason;
					std::string srcUri;
				};


				DetectLogoResult();
				explicit DetectLogoResult(const std::string &payload);
				~DetectLogoResult();
				std::vector<SuccessDetailsItem> getSuccessDetails()const;
				std::vector<std::string> getSrcUris()const;
				std::vector<FailDetailsItem> getFailDetails()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SuccessDetailsItem> successDetails_;
				std::vector<std::string> srcUris_;
				std::vector<FailDetailsItem> failDetails_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_DETECTLOGORESULT_H_