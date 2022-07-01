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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINSTATUSCODECOUNTRESULT_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINSTATUSCODECOUNTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ddoscoo/DdoscooExport.h>

namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribeDomainStatusCodeCountResult : public ServiceResult
			{
			public:


				DescribeDomainStatusCodeCountResult();
				explicit DescribeDomainStatusCodeCountResult(const std::string &payload);
				~DescribeDomainStatusCodeCountResult();
				long getStatus501()const;
				long getStatus502()const;
				long getStatus403()const;
				long getStatus503()const;
				long getStatus404()const;
				long getStatus405()const;
				long getStatus504()const;
				long getStatus2XX()const;
				long getStatus200()const;
				long getStatus3XX()const;
				long getStatus4XX()const;
				long getStatus5XX()const;

			protected:
				void parse(const std::string &payload);
			private:
				long status501_;
				long status502_;
				long status403_;
				long status503_;
				long status404_;
				long status405_;
				long status504_;
				long status2XX_;
				long status200_;
				long status3XX_;
				long status4XX_;
				long status5XX_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINSTATUSCODECOUNTRESULT_H_