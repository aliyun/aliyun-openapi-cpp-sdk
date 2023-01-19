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

#ifndef ALIBABACLOUD_SAS_MODEL_GETCLIENTUSERDEFINERULERESULT_H_
#define ALIBABACLOUD_SAS_MODEL_GETCLIENTUSERDEFINERULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT GetClientUserDefineRuleResult : public ServiceResult
			{
			public:
				struct UserDefineRuleDetail
				{
					std::string filePath;
					std::string actionType;
					std::string platform;
					std::string registryContent;
					std::string iP;
					int port;
					std::string parentProcPath;
					long gmtModified;
					std::string portStr;
					std::string md5List;
					std::string name;
					int type;
					long gmtCreate;
					std::string newFilePath;
					long id;
					std::string cmdline;
					std::string procPath;
					std::string parentCmdline;
					std::string registryKey;
				};


				GetClientUserDefineRuleResult();
				explicit GetClientUserDefineRuleResult(const std::string &payload);
				~GetClientUserDefineRuleResult();
				UserDefineRuleDetail getUserDefineRuleDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				UserDefineRuleDetail userDefineRuleDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_GETCLIENTUSERDEFINERULERESULT_H_