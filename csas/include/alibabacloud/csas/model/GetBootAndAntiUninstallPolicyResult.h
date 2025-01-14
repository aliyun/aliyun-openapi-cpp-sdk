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

#ifndef ALIBABACLOUD_CSAS_MODEL_GETBOOTANDANTIUNINSTALLPOLICYRESULT_H_
#define ALIBABACLOUD_CSAS_MODEL_GETBOOTANDANTIUNINSTALLPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/csas/CsasExport.h>

namespace AlibabaCloud
{
	namespace Csas
	{
		namespace Model
		{
			class ALIBABACLOUD_CSAS_EXPORT GetBootAndAntiUninstallPolicyResult : public ServiceResult
			{
			public:
				struct Strategy
				{
					struct BlockContent
					{
						struct BlockTextZh
						{
							std::string mainButtonText;
							std::string content;
							std::string minorButtonText;
							std::string title;
						};
						struct BlockTextEn
						{
							std::string mainButtonText;
							std::string content;
							std::string minorButtonText;
							std::string title;
						};
						BlockTextZh blockTextZh;
						BlockTextEn blockTextEn;
					};
					bool isAntiUninstall;
					std::string reportProcessId;
					std::string createTime;
					std::vector<std::string> userGroupIds;
					BlockContent blockContent;
					std::string updateTime;
					bool allowReport;
					bool isBoot;
					std::string policyId;
					std::vector<std::string> whitelistUsers;
				};


				GetBootAndAntiUninstallPolicyResult();
				explicit GetBootAndAntiUninstallPolicyResult(const std::string &payload);
				~GetBootAndAntiUninstallPolicyResult();
				Strategy getStrategy()const;

			protected:
				void parse(const std::string &payload);
			private:
				Strategy strategy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSAS_MODEL_GETBOOTANDANTIUNINSTALLPOLICYRESULT_H_