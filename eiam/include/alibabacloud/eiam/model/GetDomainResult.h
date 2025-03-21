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

#ifndef ALIBABACLOUD_EIAM_MODEL_GETDOMAINRESULT_H_
#define ALIBABACLOUD_EIAM_MODEL_GETDOMAINRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eiam/EiamExport.h>

namespace AlibabaCloud
{
	namespace Eiam
	{
		namespace Model
		{
			class ALIBABACLOUD_EIAM_EXPORT GetDomainResult : public ServiceResult
			{
			public:
				struct Domain
				{
					struct Filing
					{
						std::string icpNumber;
					};
					std::string domainId;
					std::string domainType;
					Filing filing;
					std::string instanceId;
					long createTime;
					long updateTime;
					std::string lockMode;
					std::string domain;
					bool defaultDomain;
				};


				GetDomainResult();
				explicit GetDomainResult(const std::string &payload);
				~GetDomainResult();
				Domain getDomain()const;

			protected:
				void parse(const std::string &payload);
			private:
				Domain domain_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIAM_MODEL_GETDOMAINRESULT_H_