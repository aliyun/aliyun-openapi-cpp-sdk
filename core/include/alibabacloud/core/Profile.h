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

#ifndef ALIBABACLOUD_CORE_PROFILE_H_
#define ALIBABACLOUD_CORE_PROFILE_H_

#include <string>
#include <map>
#include <alibabacloud/core/Credentials.h>

namespace AlibabaCloud
{
	class Profile
	{
	public:
		std::string name() const;
		void setName(const std::string& value);
		Credentials credentials() const;
		void setCredentials(const Credentials& value);
		std::string region() const;
		void setRegion(const std::string& value);
		std::string roleArn() const;
		void setRoleArn(const std::string& value);
		std::string sourceProfile() const;
		void setSourceProfile(const std::string& value);
		void setAllKeyValPairs(const std::map<std::string, std::string>& map);
		std::string value(const std::string& key);

	private:
		std::string name_;
		std::string region_;
		Credentials credentials_;
		std::string roleArn_;
		std::string sourceProfile_;
		std::map<std::string, std::string> allKeyValPairs_;
	};

}
#endif // !ALIBABACLOUD_CORE_PROFILE_H_
