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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_PREVIEWGTMRECOVERYPLANRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_PREVIEWGTMRECOVERYPLANRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT PreviewGtmRecoveryPlanResult : public ServiceResult
			{
			public:
				struct Preview
				{
					struct SwitchInfo
					{
						std::string strategyName;
						std::string content;
					};
					std::string userDomainName;
					std::string instanceId;
					std::vector<Preview::SwitchInfo> switchInfos;
					std::string name;
				};


				PreviewGtmRecoveryPlanResult();
				explicit PreviewGtmRecoveryPlanResult(const std::string &payload);
				~PreviewGtmRecoveryPlanResult();
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Preview> getPreviews()const;
				int getTotalPages()const;
				int getTotalItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				std::vector<Preview> previews_;
				int totalPages_;
				int totalItems_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_PREVIEWGTMRECOVERYPLANRESULT_H_