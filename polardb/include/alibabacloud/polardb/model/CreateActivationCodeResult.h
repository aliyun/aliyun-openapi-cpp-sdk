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

#ifndef ALIBABACLOUD_POLARDB_MODEL_CREATEACTIVATIONCODERESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_CREATEACTIVATIONCODERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT CreateActivationCodeResult : public ServiceResult
			{
			public:


				CreateActivationCodeResult();
				explicit CreateActivationCodeResult(const std::string &payload);
				~CreateActivationCodeResult();
				std::string getDescription()const;
				std::string getGmtModified()const;
				std::string getSystemIdentifier()const;
				std::string getActivateAt()const;
				std::string getExpireAt()const;
				std::string getCertContentB64()const;
				std::string getGmtCreated()const;
				int getId()const;
				std::string getMacAddress()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::string gmtModified_;
				std::string systemIdentifier_;
				std::string activateAt_;
				std::string expireAt_;
				std::string certContentB64_;
				std::string gmtCreated_;
				int id_;
				std::string macAddress_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_CREATEACTIVATIONCODERESULT_H_